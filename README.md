![Codechef Logo](https://user-images.githubusercontent.com/77433608/136649361-89697879-7105-44d2-83cc-5af4eb1e6f40.png)
# DSA

This is Ata Turhan's fork of [CodeChefMUST/Algorithms](https://github.com/CodeChefMUST/Algorithms). Original community credits and contribution guidelines are preserved below.

## Explore the algorithms

| Area | Available material |
| --- | --- |
| [Searching](Searching/) | Binary search in C++, Java, and Python; linear search in C++ and Java |
| [Sorting](Sorting/) | Bubble sort, quicksort, and selection sort examples |
| [Graph algorithms](Graph%20Algorithms/) | Dijkstra implementation |
| [Dynamic programming](Dynamic%20Programming/) | Knapsack explanation |
| [Tree traversal](Traversal%20Algorithms/Tree%20Traversals/) | Binary-tree inorder traversal |
| [Contribution guide](Contribution%20guidelines.md) | Submission expectations and repository conventions |

### Run a Python example

From the repository root with Python 3 installed:

```bash
python3 "Searching/Binary Search/Python/BinarySearch.py"
```

Each example is independent. C++ and Java examples require their corresponding compiler; some files implement functions only and need a small driver to run. Binary search expects sorted input.

### Check the C++ implementations

With a C++17 compiler, run from the repository root:

```bash
g++ -std=c++17 -Wall -Wextra -Werror tests/algorithms_test.cpp -o /tmp/algorithms-test
/tmp/algorithms-test
```

The checks cover shortest paths, disconnected vertices, large distances, invalid graph inputs, empty/singleton sorting, and linear search. Dijkstra accepts a 0-based adjacency list and rejects negative weights. Unreachable distances are `std::numeric_limits<long long>::max()`.

# Overview 
* The main goal of this project is to promote open-source, allowing anyone who wants to contribute.
* This repository would be focused on data structure and algorithms in different languages.
* You can contribute to a description, code of that algorithm, and submit solutions to the questions related to that algorithm in any language you prefer.
* Make sure to follow the contribution guidelines listed below.

# RULES:

**YOU CANNOT CREATE A PR DIRECTLY. YOU NEED TO BE ASSIGNED AN ISSUE. IF THE ISSUE DOES NOT EXIST, CREATE ONE, ASK FOR IT IN YOUR PREFERRED PROGRAMMING LANGUAGE AND WAIT FOR IT TO BE ASSIGNED TO YOU. NOT FOLLOWING THIS WILL BE CONSIDERED A VIOLATION AND YOUR PR WILL BE MARKED INVALID. WHILE CREATING AN ISSUE, PLEASE FOLLOW THE FORMAT, ELSE, THE ISSUE WILL BE CLOSED.**

# Repository structure:
Please note that while creating a pull request, you must adhere to the structure of the repository. You can create a pull request for any of the following - explaination of an algorithm in an Algorithm.md markdown file, a code of that algorithm in your preferred language, or your solutions to some questions based on that particular algorithm in a language of your choice. 
- Algorithm Type Folders (eg - Searching, Sorting, Dynamic Programming etc)
    - Algorithm Folder
        - Algorithm.md (markdown file explaining algorithm) 
        - Language Folder (eg. C++, Python, Java, Ruby, C# etc.)
            - Algorithm source code file (named as Algorithm.cpp / .py etc in CamelCase. Eg - HeapSort.cpp, BinarySearch.py)
            - Question based on the algorithm


# Contribution Guidelines:
If you want a more detailed explanation, please visit [here](https://github.com/CodeChefMUST/DSA/blob/main/Contribution%20guidelines.md).

* Issues will be assigned on a ***first come, first serve basis***. The person who creates the issue gets the first priority. And then, issues are assigned based on who commented first. You just have to comment on the issue, asking to be assigned and the programming language you should be assigned in, and it will be done if found fit.
* You cannot work on any issue that is not assigned to you.
* If you have anything else in mind, **FEEL FREE TO CREATE AN ISSUE** and please wait for it to be assigned to you. If assigned to you, then you can start working on it and create a PR.
* All PRs must be made from a Branch. Create a separate branch for every Issue you are working upon and then create a PR.
* In your code file, add (Inside a multiline comment) Sample Input and Output at the end of the file along with Time and Space Complexity.
* Every time you add a file via a Pull Request also update the algo.md file for that particular language in the same PR. You'll find a algo.md file in each language folder for every algorithm.
* Plagiarism is highly discouraged and a plagiarized PR won't be accepted at all and will be marked as spam.
* PR should be created within a week of you being assigned to it.
* At no point of time, you can claim more than 4 issues i.e. you can have at max 4 working issues, for this repository.

# Maintainers / Collaborators:
1. @Taneesha-creates
2. @deepansha-singh

