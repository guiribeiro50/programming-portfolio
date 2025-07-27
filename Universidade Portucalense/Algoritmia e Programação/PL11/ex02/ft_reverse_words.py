def reverse_words(sentence):
    words = sentence.split()
    result = ""
    for word in words:
        result += word[::-1] + " "
    return result.strip()

sentence = "Python is awesome"
result = reverse_words(sentence)
print(result)