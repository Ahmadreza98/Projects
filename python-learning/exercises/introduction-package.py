from mylibrary import Library

Booklib = Library("Mathematics", "Outta")
Booklib.add_book("book1", "auther1")
Booklib.add_book("book2", "auther2")
Booklib.add_book("book3", "auther3")
Booklib.add_book("book4", "auther4")


if __name__ == "__main__":

    while True:
        print("1.Add Book.")
        print("2.Remove Book.")
        print("3.Search Book.")
        print("4.Show Library.")
        print("5.Exit.")

        inp = int(input("Select Choice: "))

        if inp == 1:
            book = input("Please enter the book name: ")
            auther = input("Please enter the auther name: ")
            Booklib.add_book(book, auther)

        elif inp == 2:
            book = input("Please enter the book name: ")
            Booklib.remove_book(book)

        elif inp == 3:
            book = input("Please enter the book name: ")
            Booklib.search_book(book)
        elif inp == 4:
            Booklib.show_book()
        elif inp == 5:
            break
