
   h = findobj(B.PlotSignals(3),'Type','line');
    x = h(1).XData;
    y = h(1).YData;
   
    xlswrite('auto_trans_',{transpose(x),transpose(y)});