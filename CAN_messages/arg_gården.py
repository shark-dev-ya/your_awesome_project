import sys

if __name__ == "__main__":  
    local_args = sys.argv
    local_args.pop(0)
    if len(local_args) < 3:
        print("Oh no! You should provide at least 3 arguments!")

    print(f"i sell {local_args}")