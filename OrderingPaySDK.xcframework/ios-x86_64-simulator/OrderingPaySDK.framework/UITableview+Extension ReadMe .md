# UITableview+Extension

The purpose of this extension is to remove the repetition of code when registering or dequeuing a cell in UITableview.

## When should you use this extension
Whenever you are using a UITableview and you need to:
* Register a cell
* Dequeue a cell

## Usage

* Instead of registering a cell using the below code:
```swift
let nib = UINib(nibName: "cellIdentifier", bundle: frameworkBundle)
self.register(nib, forCellWithReuseIdentifier: "cellIdentifier")
```

You simply register by the following single line of code:
```swift
tableView.register(cellType.self)
```

* Instead of dequeueing a cell using the below code: 
```swift
let cell = tableView.dequeueReusableCell
(withReuseIdentifier: "cellIdentifier", for: indexPath) as! CellType
```

You simply dequeue by the following line of code:
```swift
let cell = tableView.dequeueReusableCell(for: indexPath) 
```
In this case you do not need to case the cell or specify the ReuseIdentifier every time you have to dequeue a cell.  
