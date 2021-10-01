import sys
import argparse
import os
import shutil

class CategoriseFolderContents:
    def __init__(self) -> None:
        self.skip_this_file = sys.argv[0]
        self.skip_git_dir = '.git'
        self.skip_readme_md = 'README.md'

    def group_files_by_ext(self, dir_path = os.getcwd()):
        all_files = os.listdir(dir_path)
        if self.skip_git_dir in all_files:
            all_files.remove(self.skip_git_dir)
        if self.skip_readme_md in all_files:
            all_files.remove(self.skip_readme_md)
        if self.skip_this_file in all_files:
            all_files.remove(self.skip_this_file)

        for file in all_files:
            try:
                extension = os.path.splitext(file)[1]
                extension = extension.replace('.','')
                extension_dir = os.path.join(dir_path, extension)
                if not os.path.exists(extension_dir):
                    os.makedirs(extension_dir,exist_ok=True)
                if not os.path.isdir(file):
                    shutil.move(file, extension_dir)
            except:
                pass

    def group_contents(self,arguments):
        if arguments.groupby == 'ext':
            self.group_files_by_ext()

if __name__ == "__main__":
    argp = argparse.ArgumentParser()
    argp.add_argument('--groupby', help="filter to group the scripts in the folder", choices=['ext'], default='ext')
    arguments = argp.parse_args()
    cfc = CategoriseFolderContents()
    cfc.group_contents(arguments)