#!/usr/bin/python3


def safe_print_division(a, b):
    """divded two integer and print the result

    Args:
        a (int): value one
        b (int): value two
    """
    try:
        res = a / b
    except:
        res = None
    finally:
        print("Inside result: {}".format(res))
    return res