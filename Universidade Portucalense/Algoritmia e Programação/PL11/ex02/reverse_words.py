def reverse_words(sentence):
    words = sentence.split()
    result = ""
    for i in range(len(words)):
        result += words[i][::-1] + " "
    return result.strip()

sentence = "Python is awesome"
result = reverse_words(sentence)
print(result)
