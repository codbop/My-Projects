package javaapplication3;


public class Item<AnyType> 
{
    public AnyType object;
    public Item<AnyType> next;
    
    public Item(AnyType o, Item<AnyType> n)
    {
        object = o;
        next = n;
    }
    
    public Item()
    {
        object = null;
        next = null;
    }
    
    public void setNext(Item<AnyType> n)
    {
        next = n;
    } 
    
    public AnyType getObject()
    {
        return object;
    }        
}
