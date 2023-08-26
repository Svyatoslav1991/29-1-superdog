# 29-1-superdog

All our animals can meow and bark, that is, make sounds in accordance with their class.
But what if you need to add new behaviors to them, for example, teach them to swim or stand on their hind legs.
Consider the Dog class: all dogs can bark and run, and some dogs can swim well.
To add these qualities to the Dog class, we can create another floating animal class and extend our class from it.
But what if not all dogs can swim well, and some of them can't swim at all.
Our task is to build the Dog class in such a way that it is possible to selectively add new skills to its objects, but at the same time not change the behavior of the main class.
The list of skills will be called using the show_talents() method
