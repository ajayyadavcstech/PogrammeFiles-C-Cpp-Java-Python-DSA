def searcher():
    import time
    book="ajay is a good boy"
    print("Taking time during reading book")
    #4 second taking in reading book(task)
    time.sleep(5)
    while True:
        text=(yield)
        if text in book:
            print("Text in book")
        else:
            print("Text not in book")

search=searcher() #object
next(search)
search.send("ajay")
search.send("good")
search.send("never")