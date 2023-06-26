#! /bin/python3

def print_rev(s: str | None):
    if s == None:
        return
     
    print_rev(s[1:] if s[1:] else None)
    print(s[0], end='')

def main():
    print_rev("Hell")

if __name__ == "__main__":
    main()
