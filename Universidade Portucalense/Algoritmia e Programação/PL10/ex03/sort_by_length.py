def sort_by_length(words):
    for i in range(len(words) - 1):
        for j in range(len(words) - i - 1):
            if len(words[j]) > len(words[j + 1]):
                words[j + 1], words[j] = words[j], words[j + 1]
    return words

words = ["apple", "pie", "banana", "kiwi"]
print(sort_by_length(words))