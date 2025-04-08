# Save the README content to a file for easy copying
readme_content = """
# Minishell 🖥️

Minishell is a simple Unix shell implementation built as part of the 42 school curriculum. This project aims to replicate basic shell functionalities, including built-in commands, file redirections, piping, and process management. It demonstrates a deep understanding of the underlying mechanisms of shell execution.

## Features 🚀

- **Command Parsing**: Parse user input and interpret commands.
- **Pipes (|)**: Handle piping between commands.
- **Redirections (`>`, `>>`, `<`, `<<`)**: Support input/output redirections.
- **Environment Variables**: Support for reading and modifying environment variables.
- **Built-in Commands**:
  - `cd`
  - `echo`
  - `env`
  - `exit`
  - `export`
  - `pwd`
  - `unset`
- **Signal Handling**: Handle Unix signals (SIGINT, SIGQUIT) correctly.
- **Customizable Prompt**: Dynamic prompt with customizable features.
- **Error Handling**: Proper error reporting for invalid commands or issues.

## Installation 🛠️

### Requirements
- A Unix-based operating system (Linux, macOS)
- 42 school environment or similar development environment
- GCC compiler
- Make

### Clone the repository

```bash
git clone git@github.com:yourusername/minishell.git
cd minishell
