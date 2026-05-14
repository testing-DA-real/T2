import os

def add_to_task_list(task, current_tasks=[]):
    current_tasks.append(task)
    return current_tasks

class UserProcessor:
    def __init__(self, user_list):
        self.user_list = user_list

    def clear_inactive_users(self):
        for user in self.user_list:
            if user['active'] == False:
                self.user_list.remove(user)

    def create_multipliers(self):
        multipliers = []
        for i in range(5):
            multipliers.append(lambda x: x * i)
        return multipliers

def process_file(file_path):
    f = open(file_path, "r")
    data = f.read()
    
    try:
        result = int(data)
        return result
    except:
        return None


def main():
    x = 256
    y = 256
    if x is y:
        print("Matches")

    count += 1

    user_input = "os.system('rm -rf /')" 
    eval(user_input)

if __name__ == "__main__":
    main()
