# importing tkinter module and Widgets
from tkinter import Tk
from tkinter.ttk import Label, Style


# Creating App class which will contain
# Label Widgets
class App:
	def __init__(self, master) -> None:

		# Instantiating master i.e toplevel Widget
		self.master = master

		# Creating first Label i.e with default font-size
		Label(self.master, text="I have default font-size").pack(pady=20)

		# Instantiating Style class
		self.style = Style(self.master)

		# Configuring Custom Style
		# Name of the Style is "My.TLabel"
		self.style.configure("My.TLabel", font=('Arial', 25))

		# Creating second label
		# This label has a font-family of Arial
		# and font-size of 25
		Label(
			self.master,
			text="I have a font-size of 25",

			# Changing font-size using custom style
			style="My.TLabel").pack()


if __name__ == "__main__":

	# Instantiating top level
	root = Tk()

	# Setting the title of the window
	root.title("Change font-size of Label")

	# Setting the geometry i.e Dimensions
	root.geometry("400x250")

	# Calling our App
	app = App(root)

	# Mainloop which will cause this toplevel
	# to run infinitely
	root.mainloop()
