/***************************
@Author: Chunel
@Contact: chunel@foxmail.com
@File: GAspect.h
@Time: 2021/10/2 9:46 下午
@Desc: 
***************************/

#ifndef CGRAPH_GASPECT_H
#define CGRAPH_GASPECT_H

#include <vector>

#include "GAspectObject.h"

class GAspect : public GAspectObject {
public:
    /**
     * init()函数切面开始期间动作
     */
    virtual CSTATUS beginInit() {
        return STATUS_OK;
    }

    /**
     * init()函数切面结束期间动作
     */
    virtual void finishInit(CSTATUS status) {}

    /**
     * run()函数切面开始期间动作
     */
    virtual CSTATUS beginRun() {
        return STATUS_OK;
    }

    /**
     * run()函数切面结束期间动作
     */
    virtual void finishRun(CSTATUS status) {}

    /**
     * deinit()函数切面开始期间动作
     */
    virtual CSTATUS beginDeinit() {
        return STATUS_OK;
    }

    /**
     * deinit()函数切面结束期间动作
     */
    virtual void finishDeinit(CSTATUS status) {}
};

using GAspectPtr = GAspect *;
using GAspectPtrArr = std::vector<GAspectPtr>;


#endif //CGRAPH_GASPECT_H