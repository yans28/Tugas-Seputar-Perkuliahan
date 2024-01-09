# Metode CMD
import cmd

class Shell(cmd.Cmd):
    intro = "Masukkan perintah yang diinginkan atau ketik 'help' untuk bantuan."
    prompt = "(example) "

    def do_greet(self, arg):
        "Greet a person by name"
        print("Greetings to you, ", arg)

    def do_EOF(self, arg):
        "Exit the application"
        print()
        return True

if __name__ == "__main__":
    Shell().cmdloop()