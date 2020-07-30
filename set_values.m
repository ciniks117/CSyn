% 
%    global index;
%    global pval;
%    global newfile;
%    global sind;
   

 function set_values(newfile,index,sind,pval)   
   open_system(newfile);
   b = find_system(newfile,'Type','Block');  
    for i=1:length(b)
       prefix = strsplit(char(b(i)),'/');
       if length(prefix)>2
           continue;
       end

       if strcmp(prefix(2),sind(index))
          handle = get_param(b{i},'handle');
          block = get(handle);
       end    
    end
    set_param(handle,block.BlockType,num2str(pval(index)));
    save_system(newfile);
   close_system(newfile);
 end   
