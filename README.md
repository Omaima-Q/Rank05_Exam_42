# 42 Exam Rank 05

Subjects and practice solutions for the **42 School Exam Rank 05**.

The exam has two levels. You get one exercise from each level:

- **Level 0**: a C++ class exercise (`bigint`, `vect2` or `polyset`)
- **Level 1**: a C algorithm exercise (`bsq` or `life`)

## Repository structure

```
.
├── level0/                 # C++
│   ├── bigint/             # arbitrary precision unsigned integer
│   ├── vect2/              # 2D integer vector with operator overloading
│   └── polyset/            # searchable bags and a set wrapper
│       └── subject/        # files given with the subject
└── level1/                 # C
    ├── BSQ/                # biggest square on a map
    └── Life/               # Conway's Game of Life
```

Each exercise folder has a `subject.txt` with the full assignment and the solution files.

## Exercises

### Level 0 (C++)

| Exercise | Expected files | Summary |
|----------|----------------|---------|
| **bigint** | `bigint.hpp`, `bigint.cpp` | A `bigint` class that stores an unsigned integer of any size. It supports addition, comparison and base-10 digit shifting (`42 << 3 == 42000`, `1337 >> 2 == 13`), and prints with `<<` without leading zeros. |
| **vect2** | `vect2.hpp`, `vect2.cpp` | A 2D vector of `int`s. It supports `+`, `-`, scalar `*`, compound assignment, `++`/`--`, unary `-`, `==`/`!=`, and `[]` access. It prints as `{x, y}`. |
| **polyset** | `searchable_array_bag.*`, `searchable_tree_bag.*`, `set.*` | Adds a `has()` search to the given `array_bag` and `tree_bag` classes, then writes a `set` class that wraps a `searchable_bag` so it never holds duplicates. All classes follow Orthodox Canonical Form. |

### Level 1 (C)

| Exercise | Allowed functions | Summary |
|----------|-------------------|---------|
| **bsq** | `malloc`, `calloc`, `realloc`, `free`, `fopen`, `fclose`, `getline`, `fscanf`, `fputs`, `fprintf` | Finds the biggest square on a map that contains no obstacles and fills it in. Reads maps from files or from stdin. Prints `map error` for invalid maps. |
| **life** | `atoi`, `read`, `putchar`, `malloc`, `calloc`, `realloc`, `free` | Draws a starting board from pen commands on stdin (`w` `a` `s` `d` to move, `x` to toggle drawing), then runs Conway's Game of Life for the given number of iterations. |

## Building and testing

**Level 0 (C++)**

```sh
cd level0/vect2
c++ -Wall -Wextra -Werror main.cpp vect2.cpp -o vect2 && ./vect2

cd ../bigint
c++ -Wall -Wextra -Werror main.cpp bigint.cpp -o bigint && ./bigint

cd ../polyset
c++ -Wall -Wextra -Werror *.cpp -o polyset && ./polyset 5 3 8 3 1
```

**Level 1 (C)**

```sh
cd level1/BSQ
cc -Wall -Wextra -Werror *.c -o bsq && ./bsq map.txt

cd ../Life
cc -Wall -Wextra -Werror *.c -o life
echo 'sdxddssaaww' | ./life 5 5 0 | cat -e
```

## Exam tips

- Read `subject.txt` carefully. The given `main` shows exactly which operators and signatures you need.
- For the C++ exercises, don't forget `const` versions of your functions, and keep every class in Orthodox Canonical Form.
- Postfix `++`/`--` must return a **copy** of the old value, not a reference.
- For `bsq`, check every map-validation rule. Many failures come from edge cases such as duplicate characters, uneven line lengths or a missing final newline.
- Always compile with `-Wall -Wextra -Werror` before you submit.

## Credits

The solutions in this repository are based on the work of **fatkeski** (42 intra login), who passed Exam Rank 05 with the `vect2` and `life` exercises.

I just did some changes on some functions in vect2 and tried to summarize it and make it simple as much as i can. Take a look at it. 

This repository is for study only. Use it to learn the concepts, not to copy answers.
