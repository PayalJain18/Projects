import pyttsx3

engine = pyttsx3.init()

if __name__ == '__main__':
    print("Welcome to robospeaker")
    while True:
        x = input("Enter your command (or 'q' to quit): ")
        if x == "q":
            engine.say("bye")
            engine.runAndWait()
            break
        engine.say(x)
        engine.runAndWait()

