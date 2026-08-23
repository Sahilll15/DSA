## Add One to a Number Represented by Linked List

### Problem Statement

Given the head of a singly linked list representing a **positive integer**, where each node contains a single digit of the number, add `1` to the number represented by the linked list.

The **first node represents the leftmost digit** of the number.

Return the head of the linked list representing the resulting number.

> The number contains no leading zeroes, except when the number itself is `0`.

### Examples

#### Example 1

**Input:**

```text
head → 1 → 2 → 3
```

**Output:**

```text
head → 1 → 2 → 4
```

**Explanation:**

The linked list represents the number `123`.

```text
123 + 1 = 124
```

Therefore, the resulting linked list is:

```text
1 → 2 → 4
```

---

#### Example 2

**Input:**

```text
head → 9 → 9
```

**Output:**

```text
head → 1 → 0 → 0
```

**Explanation:**

The linked list represents the number `99`.

```text
99 + 1 = 100
```

Therefore, the resulting linked list is:

```text
1 → 0 → 0
```
