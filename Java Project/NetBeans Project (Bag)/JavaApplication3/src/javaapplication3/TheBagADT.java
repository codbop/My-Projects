package javaapplication3;


public class TheBagADT<AnyType> 
{
    private int size;
    private Item<AnyType> tempItem;
    private Item<AnyType> firstItem;
    private int distinctSize;
    
    public TheBagADT()
    {
        doClear();
    }
    
    public void clear()
    {
        doClear();
    }        
    
    public void doClear()
    {
        size = 0;
        tempItem = null;
        firstItem = null;
        distinctSize = 0;
    }
    
    public boolean isEmpty()
    {
        return size == 0; 
    }        
    
    public void add(AnyType i)
    {  
        Item<AnyType> item = new Item<AnyType>(i, null);
        if(size == 0)
        {    
        firstItem = item;
        tempItem = item;
        tempItem = firstItem;
        size++;
        distinctSize++;
        }   
        else
        {    
            if(contains(i) == false)
            distinctSize++;   
            
            if(size == 1)
            {    
            tempItem.setNext(item);
            firstItem.setNext(item);
            tempItem = item;
            size++;
            }
            else
            {
            tempItem.setNext(item);
            tempItem = item;
            size++;
            }    
        }    
    }
    
    public boolean remove(AnyType i)
    {
        Item<AnyType> item = new Item<AnyType>(i, null);
        Item<AnyType> temp;
        Item<AnyType> temp2;
        
        if(size == 1)
        {       
        temp2 = null;
        temp = null;
        firstItem = null;
        size--;
        distinctSize--;
        }
        else if(size >= 2)
        {
        temp = firstItem;
        temp2 = temp.next;
        }    
        else
        {
        temp = null;
        temp2 = null;
        }    
        
        if(contains(i))
        {
            for(int j = 0; j < size - 1; j++)
            {
                if((temp.object == item.object) && (j == 0))
                {
                if(elementSize(i) == 1)
                distinctSize--;        
                firstItem = firstItem.next;  
                j = size;
                size--;
                }
                else if((j >= 0 && j < size - 2) && (temp2.object == item.object))
                {
                if(elementSize(i) == 1)
                distinctSize--;    
                temp.setNext(temp2.next);
                temp2 = null;
                j = size;
                size--;
                }
                else if(temp2.object == item.object)
                { 
                if(elementSize(i) == 1)
                distinctSize--;        
                temp2 = null;
                tempItem = temp;
                j = size;
                size--;
                }    
                
                if(size + 1 != j)
                {    
                temp = temp.next;
                temp2 = temp2.next;
                }
            }    
        }
        else
        return false;
        
        return true;
    }        
    
    public int size()
    {
        return size;
    }        
    
    public int elementSize(AnyType i)
    {
        int iSize = 0;
        Item<AnyType> item = new Item<AnyType>(i, null);
        Item<AnyType> temp;
        temp = firstItem;
        
        for(int j = 0; j < size; j++)
        {
            if(item.object == temp.object)
            {
                iSize++;
            }
            temp = temp.next;
        }
        return iSize;
    }
    
    public int distinctSize()
    {
        return distinctSize;
    }
      
    public boolean contains(AnyType i)
    {
        return (elementSize(i) >= 1);
    }
    
    public String toString()
    {
        Item<AnyType> x;
        String rStr = "[ ";
        x = firstItem;
        
        for(int i = 0; i < size - 1; i++)
        {
        rStr += x.object + " ";
        x = x.next;
        }
        if(size > 0)
        rStr += x.object + " ";
        
        rStr += "]";
        return rStr;
    } 
}

