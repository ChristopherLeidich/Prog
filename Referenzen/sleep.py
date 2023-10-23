from time import sleep
from multiprocessing import Process
from sys import exit
 
# function executed in a child process
def task():
    # block for a moment
    sleep(1)
    # exit successfully
    exit(0)
 
# protect the entry point
if __name__ == '__main__':
    # configure a new process
    child = Process(target=task)
    # start the child process
    child.start()
    # wait for the child process to finish
    child.join()
    # check the exit code for the child process
    code = child.exitcode
    print(f'Child exit code: {code}')