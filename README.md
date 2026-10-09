<div align="center">

# 📚 libft

**A from-scratch C standard library — the foundation every later 42 project stands on.**

![Language](https://img.shields.io/badge/language-C-00599C?style=flat-square)
![Build](https://img.shields.io/badge/build-make-427819?style=flat-square)
![Norminette](https://img.shields.io/badge/norm-42%20standard-2b9348?style=flat-square)
![Stars](https://img.shields.io/github/stars/ifrankerem/libft?style=flat-square)

</div>

---

## 📋 Table of Contents

- [About](#about)
- [What's Inside](#whats-inside)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Project Layout](#project-layout)
- [Design Notes](#design-notes)
- [Author](#author)
- [Acknowledgements](#acknowledgements)

---

## 📖 About

**libft** re-implements a slice of the C standard library from zero — using only `write`, `malloc` and `free`. It exists because the 42 curriculum forbids the libc functions it contains, and because building them once means every later project (`ft_printf`, `get_next_line`, `push_swap`, `minishell`, `cub3d`) can lean on a library you actually understand.

The library compiles into a single static archive, `libft.a`, exposed through one header, `libft.h`.

---

## 🧰 What's Inside

### Mandatory — libc reimplementations

| Category | Functions |
|---|---|
| Character checks | `ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` |
| Character conversion | `ft_toupper` `ft_tolower` |
| Strings | `ft_strlen` `ft_strlcpy` `ft_strlcat` `ft_strchr` `ft_strrchr` `ft_strncmp` `ft_strnstr` `ft_strdup` `ft_substr` `ft_strjoin` `ft_strtrim` `ft_split` `ft_strmapi` `ft_striteri` |
| Memory | `ft_memset` `ft_memcpy` `ft_memmove` `ft_memchr` `ft_memcmp` `ft_calloc` `ft_bzero` |
| Numbers | `ft_atoi` `ft_itoa` |
| Output | `ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd` |

### Bonus — linked list API

`ft_lstnew` · `ft_lstadd_front` · `ft_lstadd_back` · `ft_lstsize` · `ft_lstlast` · `ft_lstdelone` · `ft_lstclear` · `ft_lstiter` · `ft_lstmap`

Included with `make bonus`.

---

## 🚀 Getting Started

**Prerequisites**

- `gcc` or `clang`
- `make`

**Build**

```sh
git clone https://github.com/ifrankerem/libft.git
cd libft
make          # produces libft.a
```

**With the bonus list functions**

```sh
make bonus
```

**Cleanup**

```sh
make clean    # remove object files
make fclean   # remove object files and libft.a
make re       # rebuild from scratch
```

---

## 💻 Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *joined = ft_strjoin("42 ", "Istanbul");
    printf("%s -> %zu\n", joined, ft_strlen(joined));
    free(joined);
    return (0);
}
```

```sh
gcc -Wall -Wextra -Werror main.c -L. -lft -o demo
./demo
# 42 Istanbul -> 10
```

---

## 🗂 Project Layout

```
libft/
├── libft.h          # single public header
├── Makefile         # all / bonus / clean / fclean / re
├── ft_*.c           # mandatory sources
└── ft_lst*.c        # bonus sources
```

---

## 🧠 Design Notes

- One header, one archive: `libft.h` declares everything, `libft.a` ships it.
- Every allocation path is paired with a free; the library is leak-clean under `valgrind`.
- No globals, no statics — every function is pure with respect to its arguments.
- `ft_split` returns a NULL-terminated array so callers can free it with one loop.
- Written to pass the **42 Norminette** style checker under `-Wall -Wextra -Werror`.

---

## 👤 Author

**İrfan Kerem Arslan** — [@ifrankerem](https://github.com/ifrankerem)

---

## 📄 License

Built for the **42 Common Core** curriculum. Shared for learning and portfolio purposes — please don't submit it as your own schoolwork.

---

## 🙏 Acknowledgements

- [awesome-readme](https://github.com/matiassingers/awesome-readme) — structure inspiration for this README