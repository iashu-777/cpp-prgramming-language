import os

# Function to add the line to C programs
def add_footer_to_c_program(file_path):
    with open(file_path, 'r', encoding='cp1252',errors='ignore') as file:
        lines = file.readlines()

    # Insert the required print statement before return 0
    for i in range(len(lines) - 1, -1, -1):
        # Skip lines that are commented out or contain the ← character
        if 'return 0' in lines[i] and not lines[i].strip().startswith("//") and '←' not in lines[i]:
            lines.insert(i, '    printf("~Ashish Kumar Gupta \\n CS-DS-2A \\n 2301641540057");\n')
            break

    # Write the updated lines back to the file
    with open(file_path, 'w') as file:
        file.writelines(lines)

# Traverse directories and process all C program files
def process_directory(directory_path):
    for root, dirs, files in os.walk(directory_path):
        for file in files:
            if file.endswith('.c'):  # Only process C files
                file_path = os.path.join(root, file)
                add_footer_to_c_program(file_path)
                print(f"Updated {file_path}")

# Specify the top-level directory containing the dsalabfile folders
top_directory = './dsalabfile'  # Replace with the actual path
process_directory(top_directory)
