class node:
    def __init__(self,value):
        self.data=value
        self.left=None
        self.right=None
class tree:
    def add_ele(self,root,value):
        new_node=node(value)
        if value<root.data:
            if root.left==None:
                root.left=new_node
            else:
                self.add_ele(root.left,value)
        else:
            if root.right==None:
                root.right=new_node
            else:
                self.add_ele(root.right,value)
    #inorder
    def inorder(self,root):
        if root.left!=None:
            self.inorder(root.left)
            
        print(root.data,end=",")
        if root.right!=None:
            self.inorder(root.right)
    #preorder
    def preorder(self,root):
        print(root.data,end=",")
        if root.left !=None:
            self.preorder(root.left)
        if root.right !=None:
            self.preorder(root.right)
    #postorder
    def postorder(self,root):
        if root.left!=None:
            self.postorder(root.left)
        if root.right !=None:
            self.postorder(root.right)
        print(root.data,end=",")

    #levelorder
    def level_order(self,root):
        q=[root]
        while len(q)!=0:
            ele=q.pop(0)#1
            print(ele.data,end=" ")#2
            if ele.left!=None:#3
                q.append(ele.left)
            if ele.right!=None:
                q.append(ele.right)
    #sum of right and left
    def sum(self,root):
        res=root.data
        if root.left!=None:
            res+=self.sum(root.left)
        if root.right!=None:
            res+=self.sum(root.right)
        return res
    #height
    def height(self,root):
        if root==None:
            return -1
        left_height=self.height(root.left)
        right_height=self.height(root.right)
        return 1+max(left_height,right_height)
              
    
object=tree()
root=node(10)
object.add_ele(root,5)
object.add_ele(root,15)
object.add_ele(root,2)
object.add_ele(root,6)
object.add_ele(root,12)
object.add_ele(root,17)
object.inorder(root)
print()
object.preorder(root)
print()
object.postorder(root)
print()
object.level_order(root)
print()
print(object.sum(root.left))
print(object.sum(root.right))
print(object.sum(root.left)*object.sum(root.right))
print(object.height(root))



