# Radare2

# toc

<!-- vim-markdown-toc GFM -->

* [the basics](#the-basics)
  * [`r2`](#r2)
* [scripting with `r2pipe`](#scripting-with-r2pipe)
* [configuration](#configuration)
* [GUIs](#guis)
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

| tool name     | function                                           |
| ---           | ---                                                |
| **`radare2`** | the main tool (CLI/TUI), aliased to `r2`           |
| `pr2pm`       | the r2 package manager                             |
| `rabin2`      | extracts info about a binary (ELF, PE, etc.)       |
| `radiff2`     | binary diffing, a more powerful `cmp`              |
| `rafind2`     | finds byte patterns                                |
| `ragg2`       | compiler that creates tiny binaries for injection  |
| `rahash2`     | block based hashing (great to compare large files) |
| `rarun2`      | run programs in different environments             |
| `rasm2`       | CLI assembler/disassembler (x86, x64, Java, etc.)  |
| `rax2`        | base/radix/ASCII/string converter                  |

Radare2 can open many input/output sources as if they were files. Among others:<br>
disks, files, kernel drivers, network connections, partitions, processes.

## `r2`

`r2` supports different **modes of operation**. You can think of it a
bit like the Vim of reverse engineering tools.

You start in **command mode** (CLI). Execute the `?` command to get help.
From command mode you can switch to **visual mode** (TUI) with
the `V` command. In visual mode you can cycle through various
print modes with the shortcuts `p` (next) and `P` (previous).

The shortcut `q` gets you back to command mode.<br>
The command `q` exits Radare2. You can also use `ctrl-d` both times.

| mode                     | function                             |
| ---                      | ---                                  |
| command mode             | default mode, all commands available |
| visual mode: hex         | hex editor view (similar to `xxd`)   |
| visual mode: disas       |                                      |
| visual mode: debug       |                                      |
| visual mode: words       |                                      |
| visual mode: buf         |                                      |

> r2-command-mode.jpg

<img src="../media/r2-command-mode.jpg"></img>

> r2-visual-mode-hex.jpg

<img src="../media/r2-visual-mode-hex.jpg"></img>

You will have noticed that in visual mode you use keyboard shortcuts.
Press `??` to get the full list.
You can still execute commands with `:` though, just like in Vim.
You can continue to execute commands or close the prompt with `ctrl-d`
or by sending an empty line.


# scripting with `r2pipe`

# configuration

# GUIs

* web interface: `r2 -c=H --`
* Cutter ([cutter.re](https://cutter.re))
* about 5 that are abandoned by now

# sources and further reading

* [r2b] pancake, maijin, et al. (2020). The Official Radare2 Book. https://book.rada.re/
