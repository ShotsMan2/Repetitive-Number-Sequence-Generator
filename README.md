# Repetitive Number Sequence Generator

This project implements a pattern generation algorithm in C. It constructs a specific numerical sequence where each element $i$ in the range $[1, n]$ is visually replicated to form a new pattern $ii$.

## 🧮 Mathematical Logic

The algorithm transforms the input stream based on a concatenation logic. 
For any integer $x$, the output function $f(x)$ is defined as:

$$f(x) = x \parallel x$$

*(Where $\parallel$ denotes the concatenation of string representations of the number).*

### Example Sequence
If the user input is $n=4$:
1.  $i=1 \rightarrow$ Output: `11`
2.  $i=2 \rightarrow$ Output: `22`
3.  $i=3 \rightarrow$ Output: `33`
4.  $i=4 \rightarrow$ Output: `44`

**Result Set:** `{11, 22, 33, 44}`

## ⚙️ Technical Implementation

* **Language:** C (Standard Library)
* **Logic:** The algorithm uses a `for` loop to traverse from 1 to $n$.
* **Formatting:** Instead of mathematical multiplication (which works differently for multi-digit numbers), this implementation uses **formatted output stream manipulation** (`printf("%d%d")`) to ensure that even double-digit numbers are replicated correctly (e.g., $12 \rightarrow 1212$).

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o sequence_gen
    ```
2.  Run the executable:
    ```bash
    ./sequence_gen
    ```
3.  Enter an upper bound integer to generate the sequence.

---
*This repository demonstrates loop control structures and output formatting in C.*
