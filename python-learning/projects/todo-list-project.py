# Create a Task class
class Task:
    def __init__(self, name, description, priority):
        self.name = name
        self.description = description
        self.priority = priority


# Create a TODOLIST class
class Todolist(Task):
    mytodolist = []

    def __init__(self, name, description, priority):
        super().__init__(name, description, priority)

    def addTolist(self, name, description, priority):
        self.mytodolist.append([name, description, priority])
        print("The work added to TODOLIST.")

    def popTolist(self, name):
        for ind, val in enumerate(self.mytodolist):
            if name in val:
                self.mytodolist.pop(ind)
                print(f"The work with subject '{name}' removed.")

    def showTolist(self):
        for x in self.mytodolist:
            print(x)


if __name__ == "__main__":
    print("OK")
