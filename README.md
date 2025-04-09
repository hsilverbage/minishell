# 🐚 minishell

**minishell** is a Unix-like shell implemented in C as part of the 42 School curriculum.  
This project was developed in collaboration with **Hugo Damitzian**.

## 🚀 Project Goals

The objective of this project is to build a simple shell from scratch, mimicking the behavior of a basic Unix shell. It reinforces knowledge of:

- Process and child management (`fork`, `execve`, `wait`)
- Signal handling (`SIGINT`, `SIGQUIT`)
- File descriptors and redirection
- Lexical analysis and parsing
- Memory allocation and garbage collection

## 🧠 Features

- Execution of built-in commands: `cd`, `echo`, `env`, `exit`, `export`, `pwd`, `unset`
- Execution of external commands using PATH resolution
- Command pipelines (`|`)
- Input/output redirection: `>`, `>>`, `<`
- Here-documents (`<<`)
- Environment variable expansion (`$VAR`)
- Signal handling (e.g., `Ctrl+C`, `Ctrl+\`)
- Quote handling: single `'` and double `"` quotes
- Syntax error detection
- Minimal memory leaks (manual memory management)

## 📁 Project Structure

```
.
├── include/            # Header files
│   ├── builtins.h
│   ├── heredoc.h
│   ├── minishell.h
│   ├── pipes.h
│   ├── signal_sh.h
│   └── typedef.h
│
├── libft/              # Custom standard library (libft)
│   ├── *.c
│   └── libft.h
│
├── srcs/               # Source code
│   ├── builtins/       # Built-in commands
│   ├── cleanup/        # Memory cleanup
│   ├── error/          # Error management
│   ├── exec/           # Execution engine
│   ├── lexer/          # Tokenizer
│   ├── parser/         # Parsing logic
│   ├── redirections/   # I/O redirection & heredocs
│   ├── signal/         # Signal handling
│   └── utils/          # Utility functions
│
├── main.c              # Entry point
├── Makefile            # Build configuration
├── README.md           # You are here!
```

## 🛠️ Usage

### 🧰 Requirements

- Unix-like environment (Linux/macOS)
- `make`
- GCC or Clang

### 🔧 Build the project

```bash
make
```

### 🐚 Run the shell

```bash
./minishell
```

Once launched, you can type and execute commands just like in a real shell.

## ✅ Built-in Commands

| Command  | Description                              |
|----------|------------------------------------------|
| `cd`     | Change the current directory             |
| `echo`   | Print arguments to standard output       |
| `env`    | Show the current environment variables   |
| `exit`   | Exit the shell                           |
| `export` | Set environment variables                |
| `pwd`    | Print working directory                  |
| `unset`  | Remove environment variables             |

## 💻 Example

```bash
$ echo Hello, world!
Hello, world!

$ export NAME=42
$ echo $NAME
42

$ ls | grep .c > files.txt
```

## ⚠️ Limitations

- No support for `&&`, `||`, or subshells (`()`)
- No wildcard expansion (`*`)
- No job control or background processes (`&`)

## 👥 Authors

- **Hugo Damitzian**
- **Henrik Silverbage**

---

This project was part of the **42 School** curriculum.  
We learned a ton about systems programming, memory management, and Unix internals while building this shell.
