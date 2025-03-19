import re

def fix_betty_style(filename):
    with open(filename, 'r') as f:
        lines = f.readlines()

    fixed_lines = []
    for line in lines:
        original_line = line

        # Remove leading spaces
        line = re.sub(r'^\s+', '', line)

        # Fix spacing around '*'
        line = re.sub(r'(\w)\*(\w)', r'\1 * \2', line)

        # Fix spaces after commas
        line = re.sub(r',(\S)', r', \1', line)

        # Ensure struct opening brace is on the next line
        line = re.sub(r'(struct \w+)\s*{', r'\1\n{', line)

        # Avoid duplicate new lines
        if line.strip() or original_line.strip():
            fixed_lines.append(line)

    with open(filename, 'w') as f:
        f.writelines(fixed_lines)

    print(f"Formatted {filename} to comply with Betty style.")
# Usage:
fix_betty_style("3-print_all.c")
