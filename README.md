# 📊 Grade Calculator – C Programs

A set of three progressively enhanced C programs that calculate student grades using the ternary operator and switch-case statements.

---

## 📁 File Structure

```
├── 01_Grade_calculator.c       # Basic grade calculator
├── 02_Additional_comments.c    # Grade + motivational feedback
└── 03_Eligibility_check.c      # Grade + feedback + eligibility check
```

---

## 📌 Program Overview

### 01 – Grade Calculator
The foundation program. Takes marks as input and uses a **ternary operator chain** to assign a letter grade.

| Marks Range | Grade |
|-------------|-------|
| 90 – 100    | A     |
| 80 – 89     | B     |
| 70 – 79     | C     |
| 60 – 69     | D     |
| Below 60    | F     |

---

### 02 – Additional Comments
Builds on Program 01 by adding a **`switch` statement** that prints a motivational comment based on the grade.

| Grade | Comment |
|-------|---------|
| A     | Excellent work! |
| B     | Well done! |
| C     | Good job. |
| D     | You passed, but you could do better. |
| F     | Sorry, you failed. |

> ⚠️ **Known Bug:** The ternary operator assigns `'c'` (lowercase) for marks 70–79, but the switch checks for `'C'` (uppercase). This causes the C-grade comment to never print. Fixed in Program 03.

---

### 03 – Eligibility Check
The complete version. Fixes the lowercase `'c'` bug and adds an **eligibility check** using an `if-else` statement.

- ✅ Grades **A, B, C, D** → `"Congratulations! You are eligible for next level"`
- ❌ Grade **F** → `"Please try again next time"`

---

## 🛠️ Concepts Used

- **Ternary Operator** – Compact conditional expressions for grade assignment
- **`switch` Statement** – Handling multiple grade cases with `break`
- **`if-else` Statement** – Eligibility decision based on grade
- **`printf` / `scanf`** – Input/output using stdio.h

---

## ▶️ How to Compile & Run

```bash
# Compile
gcc 03_Eligibility_check.c -o grade

# Run
./grade
```

**Sample Output:**
```
enter your marks:- 85
your grade is B
 Well done!
Congratulations! you are eligible for next level
```



