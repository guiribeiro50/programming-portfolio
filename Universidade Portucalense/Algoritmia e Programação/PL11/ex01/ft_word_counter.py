def word_counter(sentence):
    words = sentence.split()
    total_words = len(words)

    unique_words = []
    for word in words:
        if word not in unique_words:
            unique_words.append(word)

    vowels = "aeiouAEIOU"
    for char in sentence:
        if char in vowels:
            sentence = sentence.replace(char, "*")

    print(f"Total words: {total_words}")
    print(f"Unique words: {len(unique_words)}")
    print(f"Modified sentence: {sentence}")

sentence = "Python is fun and Python is powerful."
word_counter(sentence)