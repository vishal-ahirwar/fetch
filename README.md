[![fetch CI/CD](https://github.com/vishal-ahirwar/fetch/actions/workflows/cmake-single-platform.yml/badge.svg)](https://github.com/vishal-ahirwar/fetch/actions/workflows/cmake-single-platform.yml)
[![Release](https://img.shields.io/github/release/vishal-ahirwar/fetch.svg)](https://github.com/vishal-ahirwar/fetch/releases)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)
# fetch

A tiny, fast, and reliable cross-platform CLI tool to download files from the internet. Built with modern C++ and powered by cppsage.

**Made by [Vishal Ahirwar](https://github.com/vishal-ahirwar)** • Version: 0.1.1

## Features

- 🚀 **Fast downloads** with real-time progress tracking
- 🌍 **Cross-platform** support (Windows, macOS, Linux)
- 📁 **Smart file handling** with automatic filename detection
- 📊 **Progress indication** with download percentage
- 🎯 **Simple usage** - just `fetch url outfilename`

## Installation

### Pre-built Binaries

Download the latest release for your platform:

- **Windows**: [fetch-windows.zip](https://github.com/vishal-ahirwar/fetch/releases/latest/download/fetch-windows.zip)
- **Linux**: [fetch-linux.zip](https://github.com/vishal-ahirwar/fetch/releases/latest/download/fetch-linux.zip)
- **macOS**: [fetch-macos.zip](https://github.com/vishal-ahirwar/fetch/releases/latest/download/fetch-macos.zip)

Extract and add to your PATH for system-wide access.

## Usage

### Basic Syntax

```bash
fetch <url> <output_filename>
```

### Examples

```bash
# Download Google homepage
fetch www.google.com google.html

# Download a file with custom name
fetch https://example.com/document.pdf my_document.pdf

# Download an image
fetch https://example.com/photo.jpg photo.jpg
```

### Real Example Output

```bash
PS C:\Users\itsvi> fetch www.google.com google.html
Downloading google.html : inf%% 
file downloaded and saved as google.html
```

## Command Line Interface

The tool provides helpful usage information:

```bash
fetch
Made by Vishal Ahirwar Version: 0.1.1, here is how to use this tool : fetch url outfilename
```

### Arguments

| Position | Description | Required |
|----------|-------------|----------|
| 1 | URL to download from | Yes |
| 2 | Output filename | Yes |

## Development

### Prerequisites

- **cppsage**: Modern C++ package manager
- **C++17** compatible compiler
- **Git** for version control

### Quick Start

1. **Install cppsage**:
   ```bash
   pip install cppsage
   ```

2. **Clone and build**:
   ```bash
   git clone https://github.com/vishal-ahirwar/fetch.git
   cd fetch
   sage doctor
   sage compile
   ```

3. **Test the build**:
   ```bash
   ./build/fetch/fetch www.example.com test.html
   ```

### Development Commands

```bash
# Check environment and dependencies
sage doctor

# Build the project
sage compile

# Clean build artifacts
sage clean

# Build for release
sage compile
```


### Contributing

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Make your changes
4. Test your changes (`sage compile && ./build/fetch/fetch www.example.com test.html`)
5. Commit changes (`git commit -m 'Add amazing feature'`)
6. Push to branch (`git push origin feature/amazing-feature`)
7. Create a Pull Request

## Technical Details

- **Language**: Modern C++
- **Build System**: cppsage (Cargo-like for C++)
- **Networking**: HTTP/HTTPS support
- **Platforms**: Windows, Linux, macOS
- **Dependencies**: Managed via cppsage

## Performance

- **Lightweight**: Minimal resource usage
- **Fast**: Direct HTTP implementation
- **Reliable**: Cross-platform compatibility
- **Simple**: Single command operation

## Security

- **Safe downloads**: Validates URLs and file paths
- **No auto-execution**: Downloaded files are saved only
- **Input validation**: Proper argument checking

## Troubleshooting

### Common Issues

**"fetch: command not found"**
```bash
# Make sure fetch is in your PATH
export PATH=$PATH:/path/to/fetch

# Or run directly
./fetch www.example.com test.html
```

**Build issues**
```bash
# Check cppsage installation
sage doctor

# Clean and rebuild
sage clean
sage compile
```

**Download fails**
```bash
# Check URL is accessible
curl -I www.example.com

# Verify internet connection
ping google.com
```

## Version History

- **v0.1.1**: Current stable release
- **v0.1.0**: Initial release

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Built with [cppsage](https://cppsage.io) - Modern C++ package manager
- Inspired by `wget` and `curl` but designed for simplicity
- Cross-platform CI/CD with GitHub Actions

---

**Made with ❤️ by [Vishal Ahirwar](https://github.com/vishal-ahirwar)**

*Simple. Fast. Reliable.*
