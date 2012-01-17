//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Pavel Topinka on 12/17/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CalculatorBrain : NSObject

-(void)pushOperand:(double)operand;

-(double)performOperation:(NSString *) operation;

@end
