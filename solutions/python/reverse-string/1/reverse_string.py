def reverse(text):
    reversed = ""
    for i in range(len(text)):
        reversed += text[-(i+1)]
    return reversed