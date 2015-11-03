ldapsearch -Q -LLL sn='*bon*' | grep sn | wc -l | sed 's/ //g'
