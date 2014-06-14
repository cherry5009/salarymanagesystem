//
//  CSarary.h
//  salarymanagesystem
//
//  Created by cherry on 14-6-7.
//  Copyright (c) 2014年 章小萌. All rights reserved.
//

#ifndef __salarymanagesystem__CSarary__
#define __salarymanagesystem__CSarary__

class CSalary{
private:
    int m_nStaffId;
    int m_nYear;
    int m_nMonth;
    int m_nSalary;
public:
    CSalary();
    ~CSalary();
    void QueSalary();			//查询以往工资
};

#endif /* defined(__salarymanagesystem__CSarary__) */
