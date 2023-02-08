import os

def create_folder(path):    
    if not os.path.exists(path):
        os.makedirs(path)

def read_file(filename):
    content = []
    with open(filename) as fd:
        content = fd.read()
    return content

def write_to_file(filename, data):
    with open(filename, "w") as fd:
        fd.write(data)


if __name__ == "__main__":
    input_filename = "min_signals.json"
    filename = input_filename.replace(".json", "")

    content = read_file(input_filename)

    header_filename = f"CAN_{filename}.h"
    source_filename = f"CAN_{filename}.cpp"

    output_dir_header = "./output/include/CAN_Messages"
    output_dir_source = "./output/src"

    create_folder(output_dir_header)
    create_folder(output_dir_source)

    write_to_file( os.path.join(output_dir_header,header_filename) , "#include <string>\n")

    write_to_file( os.path.join(output_dir_source, source_filename), f"#include <CAN_Messages/{header_filename}>")



