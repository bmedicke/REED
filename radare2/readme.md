# Radare2

# toc

<!-- vim-markdown-toc GFM -->

* [the basics](#the-basics)
* [configuration](#configuration)
* [sources and further reading](#sources-and-further-reading)

<!-- vim-markdown-toc -->

# the basics

See [[r2b]](#sources-and-further-reading).

Radare (RawDataRecovery) was started as a forensic hex editor.
Over the years it has evolved into a reverse-engineering and
binary analysis framework. Radare2 is a complete rewrite.

---

It follows the Unix philosophy of minimalist, modular programs.
The provided command line utilities are:

| tool name     | alias | function                                           |
| ---           | ---   | ---                                                |
| `rabin2`      |       | extracts info about a binary (ELF, PE, etc.)       |
| **`radare2`** | `r2`  | the main tool (TUI)                                |
| `radiff2`     |       | binary diffing, a more powerfull `cmp`             |
| `rafind2`     |       | finds byte patterns                                |
| `ragg2`       |       | compiler that creates tiny binaries for injection  |
| `rahash2`     |       | block based hashing (great to compare large files) |
| `rarun2`      |       | run programs in different environments             |
| `rasm2`       |       | CLI assembler/disassembler (x86, x64, Java, etc.)  |
| `rax2`        |       | base/radix/ASCII/string converter                  |

# configuration

# sources and further reading

* [r2b] pancake, maijin, et al. (2020). The Official Radare2 Book. https://book.rada.re/