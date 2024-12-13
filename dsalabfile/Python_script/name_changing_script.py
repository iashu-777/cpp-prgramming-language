# By Abhishek Chaurasiya
import os

class NameReplacer:
    def __init__(self, root_path, old_name, old_id, new_name, new_id):
        self.root_path = root_path
        self.old_name = old_name
        self.old_id = old_id
        self.new_name = new_name
        self.new_id = new_id
        self.total_files = 0
        self.modified_files = 0

    def get_directories(self):
        """
        Create a dictionary with folder paths as keys and their files as values.
        """
        directories = {}
        if not os.path.exists(self.root_path) or not os.path.isdir(self.root_path):
            print("Invalid path. Please check the folder structure.")
            return None
        folders = os.listdir(self.root_path)
        folders.sort()
        for folder in folders:
            folder_path = os.path.join(self.root_path, folder)
            if os.path.isdir(folder_path):
                directories[folder_path] = os.listdir(folder_path)
        return directories

    def change_name_in_file(self, filepath):
        """
        Replace the old name and ID in the specified file with the new name and ID.
        """
        try:
            with open(filepath, "r", encoding="utf-8", errors="ignore") as file:
                lines = file.readlines()

            modified = False

            for i in range(len(lines)):
                if self.old_name in lines[i] and self.old_id in lines[i]:
                    lines[i] = lines[i].replace(self.old_name, self.new_name)
                    lines[i] = lines[i].replace(self.old_id, self.new_id)
                    modified = True

            self.total_files += 1
            if modified:
                with open(filepath, "w", encoding="utf-8", errors="ignore") as file:
                    file.writelines(lines)
                print(f"Name changed in file {filepath}")
                self.modified_files += 1
            else:
                print(f"No matching content found in file {filepath}")
        except Exception as e:
            print(f"Error processing file {filepath}: {e}")

    def process_all_files(self):
        """
        Traverse the folder structure and replace names in all files.
        """
        directories = self.get_directories()
        if directories is None:
            return

        for folder_path, files in directories.items():
            for file in files:
                file_path = os.path.join(folder_path, file)
                if os.path.isfile(file_path):
                    self.change_name_in_file(file_path)

        print("\nProcess completed!")
        print(f"Total files checked: {self.total_files}")
        print(f"Files modified: {self.modified_files}")

    def validate_structure(self):
        """
        Check whether the path structure is suitable for processing.
        """
        if not os.path.exists(self.root_path):
            print("The specified path does not exist.")
            return False

        if not os.path.isdir(self.root_path):
            print("The specified path is not a directory.")
            return False

        directories = self.get_directories()
        if directories is None or not directories:
            print("No valid subdirectories found in the path.")
            return False

        print("The directory structure is valid and ready for processing.")
        return True

if __name__ == "__main__":
    # Define the root path and replacement details
    path = r"D:\\dsalabfile"
    old_name = "~Ashish Kumar Gupta"
    old_id = "2301641540057"
    new_name = "Abhishek Chaurasiya"
    new_id = "2301641540004"

    # Create an instance of the NameReplacer class
    replacer = NameReplacer(path, old_name, old_id, new_name, new_id)

    # Validate the directory structure
    if replacer.validate_structure():
        # Process files if the structure is valid
        replacer.process_all_files()
