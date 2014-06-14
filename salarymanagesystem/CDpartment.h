//
//  CDpartment.h
//  salarymanagesystem
//
//  Created by cherry on 14-6-7.
//  Copyright (c) 2014年 章小萌. All rights reserved.
//

#ifndef __salarymanagesystem__CDpartment__
#define __salarymanagesystem__CDpartment__

class CDepartment{
private:
    int m_nDepartId;
    int m_nBossId;
public:
    CDepartment();
    ~CDepartment();
    void OrderBySalary();
    void ListAllStaff();
    
};

#endif /* defined(__salarymanagesystem__CDpartment__) */
