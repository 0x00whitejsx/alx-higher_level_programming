#!/usr/bin/python3


def safe_print_list_integers(my_list=[], x=0):
    """
    print th list of anythng , but only print intergr here
    returns the amount of interger printed
    """
    i = 0
    printed = 0 
    for i in range(0,x):
        try:
            print("{:d}".format(my_list[i]), end="")
            printed += 1
        except (ValueError, TypeError):
            contiue
        print()
        return printed
