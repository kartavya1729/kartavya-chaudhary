from time import strftime
from tkinter import Label, Tk

# ======= Configuring window =========
window = Tk()
window.title("")
window.geometry("1000x800")
window.configure(bg="green")  # =======Background of the clock=====
window.resizable(True, True)  # =====setting a resizable window size =======

clock_label = Label(
    window, bg="black", fg="cyan", font=("Arial", 30, "bold"), relief="flat", padx = "20px", pady = "20px"
)
clock_label.place(x=500, y=800)


def update_label():
    """
    This function will update the clock

    every 80 milliseconds
    """
    current_time = strftime("%H: %M: %S\n %d-%m-%Y ")
    clock_label.configure(text=current_time)
    clock_label.after(80, update_label)
    clock_label.pack(anchor="center", pady = "250px")


update_label()
window.mainloop()
