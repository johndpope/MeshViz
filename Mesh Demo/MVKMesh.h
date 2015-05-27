//
//  MVKMesh.h
//  Mesh Demo
//
//  Created by Hal Mueller on 5/26/15.
//  Copyright (c) 2015 UW GeoClaw. All rights reserved.
//

#import <SceneKit/SceneKit.h>

@interface MVKMesh : SCNGeometry
@property (nonatomic, readonly) SCNGeometry *geometry;

- (instancetype)initWithMultiplier:(double)multipler;

@end