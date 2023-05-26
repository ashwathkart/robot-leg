% Simscape(TM) Multibody(TM) version: 7.6

% This is a model data file derived from a Simscape Multibody Import XML file using the smimport function.
% The data in this file sets the block parameter values in an imported Simscape Multibody model.
% For more information on this file, see the smimport function help page in the Simscape Multibody documentation.
% You can modify numerical values, but avoid any other changes to this file.
% Do not add code to this file. Do not edit the physical units shown in comments.

%%%VariableName:smiData


%============= RigidTransform =============%

%Initialize the RigidTransform structure array by filling in null values.
smiData.RigidTransform(19).translation = [0.0 0.0 0.0];
smiData.RigidTransform(19).angle = 0.0;
smiData.RigidTransform(19).axis = [0.0 0.0 0.0];
smiData.RigidTransform(19).ID = "";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(1).translation = [-27.500000000000025 12.247448713915892 4.9999999999999973];  % mm
smiData.RigidTransform(1).angle = 0;  % rad
smiData.RigidTransform(1).axis = [0 0 0];
smiData.RigidTransform(1).ID = "B[3dprint_knee_joint-1:-:pulley_base-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(2).translation = [-102.0375239018998 150.83222881618349 4.9999999999997655];  % mm
smiData.RigidTransform(2).angle = 1.9860273225978181e-15;  % rad
smiData.RigidTransform(2).axis = [-0.92539999574842347 0.37899188364504316 -3.4826884517950091e-16];
smiData.RigidTransform(2).ID = "F[3dprint_knee_joint-1:-:pulley_base-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(3).translation = [0 0 20];  % mm
smiData.RigidTransform(3).angle = 0;  % rad
smiData.RigidTransform(3).axis = [0 0 0];
smiData.RigidTransform(3).ID = "B[pulley_base-1:-:bracket-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(4).translation = [25.000000000000135 0 -8.0000000000003428];  % mm
smiData.RigidTransform(4).angle = 1.8947119613117471e-15;  % rad
smiData.RigidTransform(4).axis = [0.51083762722678139 0.85967721768656413 4.1603656100280134e-16];
smiData.RigidTransform(4).ID = "F[pulley_base-1:-:bracket-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(5).translation = [-25.000000000000007 0 19.999999999999996];  % mm
smiData.RigidTransform(5).angle = 0;  % rad
smiData.RigidTransform(5).axis = [0 0 0];
smiData.RigidTransform(5).ID = "B[3dprint_knee_joint-1:-:aluminum-smol-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(6).translation = [10.000000000000252 9.6633812063373625e-13 24.999999999999275];  % mm
smiData.RigidTransform(6).angle = 3.14159265358979;  % rad
smiData.RigidTransform(6).axis = [-0.70710678118654746 1.804112415015879e-15 -0.70710678118654757];
smiData.RigidTransform(6).ID = "F[3dprint_knee_joint-1:-:aluminum-smol-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(7).translation = [-25.00000000000005 0 0];  % mm
smiData.RigidTransform(7).angle = 0;  % rad
smiData.RigidTransform(7).axis = [0 0 0];
smiData.RigidTransform(7).ID = "B[3dprint_bearing-1:-:3dprint_knee_joint-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(8).translation = [-24.999999999999961 -1.3145040611561853e-13 -1.9999999999999112];  % mm
smiData.RigidTransform(8).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(8).axis = [-1 6.2245477318391474e-32 -6.3211017829172664e-16];
smiData.RigidTransform(8).ID = "F[3dprint_bearing-1:-:3dprint_knee_joint-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(9).translation = [-10 -3.3500000000000036 150.00000000000009];  % mm
smiData.RigidTransform(9).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(9).axis = [-0.57735026918962584 -0.57735026918962584 0.57735026918962584];
smiData.RigidTransform(9).ID = "B[aluminum-long-1:-:3dprint_bearing-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(10).translation = [-14.999999999998979 3.3499999999997883 20.000000000000011];  % mm
smiData.RigidTransform(10).angle = 1.5707963267948963;  % rad
smiData.RigidTransform(10).axis = [-0 -9.3224239734349157e-17 -1];
smiData.RigidTransform(10).ID = "F[aluminum-long-1:-:3dprint_bearing-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(11).translation = [-7.0564971157466019 -8.3999999999996291 165.00000000000009];  % mm
smiData.RigidTransform(11).angle = 0;  % rad
smiData.RigidTransform(11).axis = [0 0 0];
smiData.RigidTransform(11).ID = "B[aluminum-smol-1:-:feet-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(12).translation = [-8.3999999999990997 -8.6419760236822185e-13 7.0564971157465974];  % mm
smiData.RigidTransform(12).angle = 2.0943951023931935;  % rad
smiData.RigidTransform(12).axis = [0.57735026918962462 0.57735026918962784 -0.57735026918962473];
smiData.RigidTransform(12).ID = "F[aluminum-smol-1:-:feet-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(13).translation = [-7.0564971157466001 -8.3999999999996255 0];  % mm
smiData.RigidTransform(13).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(13).axis = [-1 -0 -0];
smiData.RigidTransform(13).ID = "B[aluminum-long-1:-:3dprint_hip_joint-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(14).translation = [-15.000000000000298 8.3999999999998529 2.9435028842531619];  % mm
smiData.RigidTransform(14).angle = 1.570796326794897;  % rad
smiData.RigidTransform(14).axis = [2.1790229992923931e-17 -1 -1.5700924586837744e-16];
smiData.RigidTransform(14).ID = "F[aluminum-long-1:-:3dprint_hip_joint-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(15).translation = [-25.000000000000007 -14.999999999999998 20.000000000000004];  % mm
smiData.RigidTransform(15).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(15).axis = [0.57735026918962584 -0.57735026918962584 0.57735026918962584];
smiData.RigidTransform(15).ID = "B[3dprint_hip_joint-1:-:bracket-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(16).translation = [24.999999999999947 15.000000000000192 -29.999999999999996];  % mm
smiData.RigidTransform(16).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(16).axis = [-0.57735026918962584 -0.57735026918962562 -0.57735026918962595];
smiData.RigidTransform(16).ID = "F[3dprint_hip_joint-1:-:bracket-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(17).translation = [-25.000000000000014 0 0];  % mm
smiData.RigidTransform(17).angle = 0;  % rad
smiData.RigidTransform(17).axis = [0 0 0];
smiData.RigidTransform(17).ID = "B[3dprint_hip_joint-1:-:connect-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(18).translation = [1.8829382497642655e-13 -1.1546319456101628e-13 7.0000000000002309];  % mm
smiData.RigidTransform(18).angle = 1.159106867033638e-15;  % rad
smiData.RigidTransform(18).axis = [0.11633824310324849 0.99320965218409418 6.6966394278834777e-17];
smiData.RigidTransform(18).ID = "F[3dprint_hip_joint-1:-:connect-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(19).translation = [0 0 0];  % mm
smiData.RigidTransform(19).angle = 2.2236257427183546;  % rad
smiData.RigidTransform(19).axis = [-0.61472873512455062 0.49418333078356724 -0.6147287351245504];
smiData.RigidTransform(19).ID = "RootGround[connect-1]";


%============= Solid =============%
%Center of Mass (CoM) %Moments of Inertia (MoI) %Product of Inertia (PoI)

%Initialize the Solid structure array by filling in null values.
smiData.Solid(9).mass = 0.0;
smiData.Solid(9).CoM = [0.0 0.0 0.0];
smiData.Solid(9).MoI = [0.0 0.0 0.0];
smiData.Solid(9).PoI = [0.0 0.0 0.0];
smiData.Solid(9).color = [0.0 0.0 0.0];
smiData.Solid(9).opacity = 0.0;
smiData.Solid(9).ID = "";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(1).mass = 0.044993859530732025;  % kg
smiData.Solid(1).CoM = [-25.52294461470434 0 10];  % mm
smiData.Solid(1).MoI = [9.2911513802025496 17.740425014511999 23.731767911544516];  % kg*mm^2
smiData.Solid(1).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(1).color = [0 1 0];
smiData.Solid(1).opacity = 1;
smiData.Solid(1).ID = "3dprint_knee_joint*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(2).mass = 0.024011694125445678;  % kg
smiData.Solid(2).CoM = [-14.283102502993925 0 9.9306438664024483];  % mm
smiData.Solid(2).MoI = [3.2934213024092611 8.4111831049384236 10.085592402780827];  % kg*mm^2
smiData.Solid(2).PoI = [0 0.023786482812743922 0];  % kg*mm^2
smiData.Solid(2).color = [1 0 0];
smiData.Solid(2).opacity = 1;
smiData.Solid(2).ID = "3dprint_hip_joint*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(3).mass = 0.020827061652501699;  % kg
smiData.Solid(3).CoM = [-11.978055054323026 0 9.9999999999999982];  % mm
smiData.Solid(3).MoI = [3.196886983503946 7.8583092261454794 9.6465723253827118];  % kg*mm^2
smiData.Solid(3).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(3).color = [0 0 1];
smiData.Solid(3).opacity = 1;
smiData.Solid(3).ID = "3dprint_bearing*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(4).mass = 0.052329612779936287;  % kg
smiData.Solid(4).CoM = [0 0 100.00000000000004];  % mm
smiData.Solid(4).MoI = [75.793842191316415 75.793842191316145 4.1926083858122141];  % kg*mm^2
smiData.Solid(4).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(4).color = [0.89803921568627454 0.91764705882352937 0.92941176470588238];
smiData.Solid(4).opacity = 1;
smiData.Solid(4).ID = "aluminum-smol*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(5).mass = 0.060380322438388312;  % kg
smiData.Solid(5).CoM = [0 0 75];  % mm
smiData.Solid(5).MoI = [115.63191710225436 115.63191710225404 4.8376250605525808];  % kg*mm^2
smiData.Solid(5).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(5).color = [0.89803921568627454 0.91764705882352937 0.92941176470588238];
smiData.Solid(5).opacity = 1;
smiData.Solid(5).ID = "aluminum-long*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(6).mass = 0.0016828883526749804;  % kg
smiData.Solid(6).CoM = [0 0 13.5];  % mm
smiData.Solid(6).MoI = [0.10896702083570498 0.10896702083570498 0.013463106821399845];  % kg*mm^2
smiData.Solid(6).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(6).color = [0 1 0];
smiData.Solid(6).opacity = 1;
smiData.Solid(6).ID = "connect*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(7).mass = 0.0083859231515425667;  % kg
smiData.Solid(7).CoM = [0 -2.5402192398358547 0];  % mm
smiData.Solid(7).MoI = [0.77233936698472017 0.94363882891664008 0.69244453428234287];  % kg*mm^2
smiData.Solid(7).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(7).color = [0.29803921568627451 0.29803921568627451 0.29803921568627451];
smiData.Solid(7).opacity = 1;
smiData.Solid(7).ID = "feet*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(8).mass = 0.047767141674894847;  % kg
smiData.Solid(8).CoM = [12.229590062265753 -7.4581452263904739e-06 -13.32308557508706];  % mm
smiData.Solid(8).MoI = [21.024124780165927 27.200993727314874 33.988306963695671];  % kg*mm^2
smiData.Solid(8).PoI = [-5.36813575454233e-06 -1.9540241932586286 1.1582095049642055e-06];  % kg*mm^2
smiData.Solid(8).color = [0.90980392156862744 0.44313725490196076 0.031372549019607843];
smiData.Solid(8).opacity = 1;
smiData.Solid(8).ID = "bracket*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(9).mass = 0.011414034429022434;  % kg
smiData.Solid(9).CoM = [0 0 10.000000000000002];  % mm
smiData.Solid(9).MoI = [1.0876412631016064 1.0876412631016064 1.1708734669485084];  % kg*mm^2
smiData.Solid(9).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(9).color = [0.69803921568627447 0.69803921568627447 0.69803921568627447];
smiData.Solid(9).opacity = 1;
smiData.Solid(9).ID = "pulley_base*:*Default";


%============= Joint =============%
%X Revolute Primitive (Rx) %Y Revolute Primitive (Ry) %Z Revolute Primitive (Rz)
%X Prismatic Primitive (Px) %Y Prismatic Primitive (Py) %Z Prismatic Primitive (Pz) %Spherical Primitive (S)
%Constant Velocity Primitive (CV) %Lead Screw Primitive (LS)
%Position Target (Pos)

%Initialize the CylindricalJoint structure array by filling in null values.
smiData.CylindricalJoint(1).Rz.Pos = 0.0;
smiData.CylindricalJoint(1).Pz.Pos = 0.0;
smiData.CylindricalJoint(1).ID = "";

smiData.CylindricalJoint(1).Rz.Pos = -54.905827264924817;  % deg
smiData.CylindricalJoint(1).Pz.Pos = 0;  % mm
smiData.CylindricalJoint(1).ID = "[pulley_base-1:-:bracket-1]";


%Initialize the PlanarJoint structure array by filling in null values.
smiData.PlanarJoint(1).Rz.Pos = 0.0;
smiData.PlanarJoint(1).Px.Pos = 0.0;
smiData.PlanarJoint(1).Py.Pos = 0.0;
smiData.PlanarJoint(1).ID = "";

%This joint has been chosen as a cut joint. Simscape Multibody treats cut joints as algebraic constraints to solve closed kinematic loops. The imported model does not use the state target data for this joint.
smiData.PlanarJoint(1).Rz.Pos = -8.5875991843508537;  % deg
smiData.PlanarJoint(1).Px.Pos = 0;  % mm
smiData.PlanarJoint(1).Py.Pos = 0;  % mm
smiData.PlanarJoint(1).ID = "[3dprint_knee_joint-1:-:pulley_base-1]";


%Initialize the RevoluteJoint structure array by filling in null values.
smiData.RevoluteJoint(2).Rz.Pos = 0.0;
smiData.RevoluteJoint(2).ID = "";

smiData.RevoluteJoint(1).Rz.Pos = -63.49342644927566;  % deg
smiData.RevoluteJoint(1).ID = "[3dprint_bearing-1:-:3dprint_knee_joint-1]";

smiData.RevoluteJoint(2).Rz.Pos = -20.036850714118355;  % deg
smiData.RevoluteJoint(2).ID = "[3dprint_hip_joint-1:-:connect-1]";

