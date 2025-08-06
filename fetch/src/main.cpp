#include <cpr/cpr.h>
#include <fetchconfig.h>
#include <fmt/color.h>
#include <fmt/core.h>

class Downloader {
 public:
  static void download(const std::string& url,
                       const std::string& outputFilePath);
};
// progress bar
void Downloader::download(const std::string& url,
                          const std::string& outputFilePath) {
#ifdef _WIN32
  std::string name =
      outputFilePath.substr(outputFilePath.find_last_of("\\") + 1);
#else
  std::string name =
      outputFilePath.substr(outputFilePath.find_last_of("/") + 1);
#endif
  // Perform the HTTP GET request
  cpr::Response response = cpr::Get(
      cpr::Url{url}, cpr::ReserveSize{1024 * 1024 * 8},
      cpr::ProgressCallback(
          [&](cpr::cpr_off_t download_total, cpr::cpr_off_t download_now,
              cpr::cpr_off_t upload_total, cpr::cpr_off_t upload_now,
              intptr_t user_data) -> bool {
            fmt::print("\rDownloading \033[32m{}\033[0m : {:.2f}%",
                       name.c_str(),
                       ((double)download_now / download_total) * 100.0);
            return true;
          }));

  // Check if the download was successful
  if (response.status_code == 200) {
    // Open a file in binary mode to write the ZIP content
    std::ofstream outputFile(outputFilePath, std::ios::binary);

    // Write the response content to the file
    outputFile.write(response.text.c_str(), response.text.size());
    outputFile.close();
    fmt::print("\nfile downloaded and saved as \033[32m{}\033[0m",
               outputFilePath);
  } else {
    fmt::print("\nFailed to download file. Status code:\033[32m{}\033[0m",
               response.status_code);
  }
}

int main(int argc, char** argv) {
  if (argc < 3) {
    fmt::print("Made by \033[32m{}\033[0m Version: \033[32m{}\033[0m, here is how to use this tool : \033[32m{}\033[0m url outfilename",
               Project::COMPANY_NAME,Project::VERSION_STRING, Project::PROJECT_NAME);
    return 0;
  };
  Downloader::download(argv[1], argv[2]);
}