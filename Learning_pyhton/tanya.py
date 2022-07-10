#l=[{"id":1,"name":"Ayush"},{"id":1,"name":"AJJ"},{"id":3,"name":"bJ"},{"id":3,"name":"JJJ"},{"id":2,"name":"JsshJ"}]
l=[{"id":1,"name":"noo"},{"id":3,"name":"baJ"}]
l4=[[{'id': 1, 'name': 'AJJ'}, {'id': 3, 'name': 'JJJ'}]]
l2=[]
for a in l:
    l2.append(a["id"])
l3=set(l2) #set function makes it a list with only unique values
for i in l3:#iterating through the set to find if duplicate ocuurs
        for j in range(len(l)):
            for o in range(len(l4)):#checking if the id already exists in the new list .If so appending all elements
                if l4[o]["id"]==i:
                    l4.append(l[j])
                    '''for k in range(j+1,len(l)):#appending all element
                        if l[k]["id"]==i:
                            l4.append(l[k])'''
                    break
            if l[j]["id"]==i:
                for k in range(j+1,len(l)):
                    if l[k]["id"]==i:
                        l4.append(l[k])
                break
print( l4)