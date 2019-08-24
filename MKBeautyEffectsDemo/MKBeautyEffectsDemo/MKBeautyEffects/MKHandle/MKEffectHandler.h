//
//  MKEffectHandler.h
//  MKBeautyEffectsDemo
//
//  Created by mkil on 2019/8/19.
//  Copyright © 2019 黎宁康. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <OpenGLES/EAGL.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>
#import "MKGPUImageConstants.h"

NS_ASSUME_NONNULL_BEGIN

@interface MKEffectHandler : NSObject

/**
 初始化判断是否是处理纹理数据
 */
- (instancetype)initWithProcessTexture:(Boolean)isProcessTexture;

/**
 设置特效旋转或者翻转, 共8个方向
 */
@property (nonatomic, assign) MKGPUImageRotationMode rotateMode;

/**
 处理纹理数据
 
 @param texture 纹理数据
 @param width 宽度
 @param height 高度
 */
- (void)processWithTexture:(GLuint)texture width:(GLint)width height:(GLint)height;




@end

NS_ASSUME_NONNULL_END