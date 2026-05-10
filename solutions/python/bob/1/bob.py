def response(raw):
    hey_bob = "".join(raw.split())
    # return hey_bob
    if not hey_bob:
        return "Fine. Be that way!"
    if hey_bob.isupper():
        if hey_bob[-1]=='?':
            return "Calm down, I know what I'm doing!"
        else:
            return "Whoa, chill out!"
    if hey_bob[-1]=='?':
        return "Sure."
    return "Whatever."