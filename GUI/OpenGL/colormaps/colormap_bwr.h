#include <cstdlib>
extern float const colormap_bwr[256][3] = {
	{ 0.00000000f, 0.00000000f, 1.00000000f},
	{ 0.00784314f, 0.00784314f, 1.00000000f},
	{ 0.01568627f, 0.01568627f, 1.00000000f},
	{ 0.02352941f, 0.02352941f, 1.00000000f},
	{ 0.03137255f, 0.03137255f, 1.00000000f},
	{ 0.03921569f, 0.03921569f, 1.00000000f},
	{ 0.04705882f, 0.04705882f, 1.00000000f},
	{ 0.05490196f, 0.05490196f, 1.00000000f},
	{ 0.06274510f, 0.06274510f, 1.00000000f},
	{ 0.07058824f, 0.07058824f, 1.00000000f},
	{ 0.07843137f, 0.07843137f, 1.00000000f},
	{ 0.08627451f, 0.08627451f, 1.00000000f},
	{ 0.09411765f, 0.09411765f, 1.00000000f},
	{ 0.10196078f, 0.10196078f, 1.00000000f},
	{ 0.10980392f, 0.10980392f, 1.00000000f},
	{ 0.11764706f, 0.11764706f, 1.00000000f},
	{ 0.12549020f, 0.12549020f, 1.00000000f},
	{ 0.13333333f, 0.13333333f, 1.00000000f},
	{ 0.14117647f, 0.14117647f, 1.00000000f},
	{ 0.14901961f, 0.14901961f, 1.00000000f},
	{ 0.15686275f, 0.15686275f, 1.00000000f},
	{ 0.16470588f, 0.16470588f, 1.00000000f},
	{ 0.17254902f, 0.17254902f, 1.00000000f},
	{ 0.18039216f, 0.18039216f, 1.00000000f},
	{ 0.18823529f, 0.18823529f, 1.00000000f},
	{ 0.19607843f, 0.19607843f, 1.00000000f},
	{ 0.20392157f, 0.20392157f, 1.00000000f},
	{ 0.21176471f, 0.21176471f, 1.00000000f},
	{ 0.21960784f, 0.21960784f, 1.00000000f},
	{ 0.22745098f, 0.22745098f, 1.00000000f},
	{ 0.23529412f, 0.23529412f, 1.00000000f},
	{ 0.24313725f, 0.24313725f, 1.00000000f},
	{ 0.25098039f, 0.25098039f, 1.00000000f},
	{ 0.25882353f, 0.25882353f, 1.00000000f},
	{ 0.26666667f, 0.26666667f, 1.00000000f},
	{ 0.27450980f, 0.27450980f, 1.00000000f},
	{ 0.28235294f, 0.28235294f, 1.00000000f},
	{ 0.29019608f, 0.29019608f, 1.00000000f},
	{ 0.29803922f, 0.29803922f, 1.00000000f},
	{ 0.30588235f, 0.30588235f, 1.00000000f},
	{ 0.31372549f, 0.31372549f, 1.00000000f},
	{ 0.32156863f, 0.32156863f, 1.00000000f},
	{ 0.32941176f, 0.32941176f, 1.00000000f},
	{ 0.33725490f, 0.33725490f, 1.00000000f},
	{ 0.34509804f, 0.34509804f, 1.00000000f},
	{ 0.35294118f, 0.35294118f, 1.00000000f},
	{ 0.36078431f, 0.36078431f, 1.00000000f},
	{ 0.36862745f, 0.36862745f, 1.00000000f},
	{ 0.37647059f, 0.37647059f, 1.00000000f},
	{ 0.38431373f, 0.38431373f, 1.00000000f},
	{ 0.39215686f, 0.39215686f, 1.00000000f},
	{ 0.40000000f, 0.40000000f, 1.00000000f},
	{ 0.40784314f, 0.40784314f, 1.00000000f},
	{ 0.41568627f, 0.41568627f, 1.00000000f},
	{ 0.42352941f, 0.42352941f, 1.00000000f},
	{ 0.43137255f, 0.43137255f, 1.00000000f},
	{ 0.43921569f, 0.43921569f, 1.00000000f},
	{ 0.44705882f, 0.44705882f, 1.00000000f},
	{ 0.45490196f, 0.45490196f, 1.00000000f},
	{ 0.46274510f, 0.46274510f, 1.00000000f},
	{ 0.47058824f, 0.47058824f, 1.00000000f},
	{ 0.47843137f, 0.47843137f, 1.00000000f},
	{ 0.48627451f, 0.48627451f, 1.00000000f},
	{ 0.49411765f, 0.49411765f, 1.00000000f},
	{ 0.50196078f, 0.50196078f, 1.00000000f},
	{ 0.50980392f, 0.50980392f, 1.00000000f},
	{ 0.51764706f, 0.51764706f, 1.00000000f},
	{ 0.52549020f, 0.52549020f, 1.00000000f},
	{ 0.53333333f, 0.53333333f, 1.00000000f},
	{ 0.54117647f, 0.54117647f, 1.00000000f},
	{ 0.54901961f, 0.54901961f, 1.00000000f},
	{ 0.55686275f, 0.55686275f, 1.00000000f},
	{ 0.56470588f, 0.56470588f, 1.00000000f},
	{ 0.57254902f, 0.57254902f, 1.00000000f},
	{ 0.58039216f, 0.58039216f, 1.00000000f},
	{ 0.58823529f, 0.58823529f, 1.00000000f},
	{ 0.59607843f, 0.59607843f, 1.00000000f},
	{ 0.60392157f, 0.60392157f, 1.00000000f},
	{ 0.61176471f, 0.61176471f, 1.00000000f},
	{ 0.61960784f, 0.61960784f, 1.00000000f},
	{ 0.62745098f, 0.62745098f, 1.00000000f},
	{ 0.63529412f, 0.63529412f, 1.00000000f},
	{ 0.64313725f, 0.64313725f, 1.00000000f},
	{ 0.65098039f, 0.65098039f, 1.00000000f},
	{ 0.65882353f, 0.65882353f, 1.00000000f},
	{ 0.66666667f, 0.66666667f, 1.00000000f},
	{ 0.67450980f, 0.67450980f, 1.00000000f},
	{ 0.68235294f, 0.68235294f, 1.00000000f},
	{ 0.69019608f, 0.69019608f, 1.00000000f},
	{ 0.69803922f, 0.69803922f, 1.00000000f},
	{ 0.70588235f, 0.70588235f, 1.00000000f},
	{ 0.71372549f, 0.71372549f, 1.00000000f},
	{ 0.72156863f, 0.72156863f, 1.00000000f},
	{ 0.72941176f, 0.72941176f, 1.00000000f},
	{ 0.73725490f, 0.73725490f, 1.00000000f},
	{ 0.74509804f, 0.74509804f, 1.00000000f},
	{ 0.75294118f, 0.75294118f, 1.00000000f},
	{ 0.76078431f, 0.76078431f, 1.00000000f},
	{ 0.76862745f, 0.76862745f, 1.00000000f},
	{ 0.77647059f, 0.77647059f, 1.00000000f},
	{ 0.78431373f, 0.78431373f, 1.00000000f},
	{ 0.79215686f, 0.79215686f, 1.00000000f},
	{ 0.80000000f, 0.80000000f, 1.00000000f},
	{ 0.80784314f, 0.80784314f, 1.00000000f},
	{ 0.81568627f, 0.81568627f, 1.00000000f},
	{ 0.82352941f, 0.82352941f, 1.00000000f},
	{ 0.83137255f, 0.83137255f, 1.00000000f},
	{ 0.83921569f, 0.83921569f, 1.00000000f},
	{ 0.84705882f, 0.84705882f, 1.00000000f},
	{ 0.85490196f, 0.85490196f, 1.00000000f},
	{ 0.86274510f, 0.86274510f, 1.00000000f},
	{ 0.87058824f, 0.87058824f, 1.00000000f},
	{ 0.87843137f, 0.87843137f, 1.00000000f},
	{ 0.88627451f, 0.88627451f, 1.00000000f},
	{ 0.89411765f, 0.89411765f, 1.00000000f},
	{ 0.90196078f, 0.90196078f, 1.00000000f},
	{ 0.90980392f, 0.90980392f, 1.00000000f},
	{ 0.91764706f, 0.91764706f, 1.00000000f},
	{ 0.92549020f, 0.92549020f, 1.00000000f},
	{ 0.93333333f, 0.93333333f, 1.00000000f},
	{ 0.94117647f, 0.94117647f, 1.00000000f},
	{ 0.94901961f, 0.94901961f, 1.00000000f},
	{ 0.95686275f, 0.95686275f, 1.00000000f},
	{ 0.96470588f, 0.96470588f, 1.00000000f},
	{ 0.97254902f, 0.97254902f, 1.00000000f},
	{ 0.98039216f, 0.98039216f, 1.00000000f},
	{ 0.98823529f, 0.98823529f, 1.00000000f},
	{ 0.99607843f, 0.99607843f, 1.00000000f},
	{ 1.00000000f, 0.99607843f, 0.99607843f},
	{ 1.00000000f, 0.98823529f, 0.98823529f},
	{ 1.00000000f, 0.98039216f, 0.98039216f},
	{ 1.00000000f, 0.97254902f, 0.97254902f},
	{ 1.00000000f, 0.96470588f, 0.96470588f},
	{ 1.00000000f, 0.95686275f, 0.95686275f},
	{ 1.00000000f, 0.94901961f, 0.94901961f},
	{ 1.00000000f, 0.94117647f, 0.94117647f},
	{ 1.00000000f, 0.93333333f, 0.93333333f},
	{ 1.00000000f, 0.92549020f, 0.92549020f},
	{ 1.00000000f, 0.91764706f, 0.91764706f},
	{ 1.00000000f, 0.90980392f, 0.90980392f},
	{ 1.00000000f, 0.90196078f, 0.90196078f},
	{ 1.00000000f, 0.89411765f, 0.89411765f},
	{ 1.00000000f, 0.88627451f, 0.88627451f},
	{ 1.00000000f, 0.87843137f, 0.87843137f},
	{ 1.00000000f, 0.87058824f, 0.87058824f},
	{ 1.00000000f, 0.86274510f, 0.86274510f},
	{ 1.00000000f, 0.85490196f, 0.85490196f},
	{ 1.00000000f, 0.84705882f, 0.84705882f},
	{ 1.00000000f, 0.83921569f, 0.83921569f},
	{ 1.00000000f, 0.83137255f, 0.83137255f},
	{ 1.00000000f, 0.82352941f, 0.82352941f},
	{ 1.00000000f, 0.81568627f, 0.81568627f},
	{ 1.00000000f, 0.80784314f, 0.80784314f},
	{ 1.00000000f, 0.80000000f, 0.80000000f},
	{ 1.00000000f, 0.79215686f, 0.79215686f},
	{ 1.00000000f, 0.78431373f, 0.78431373f},
	{ 1.00000000f, 0.77647059f, 0.77647059f},
	{ 1.00000000f, 0.76862745f, 0.76862745f},
	{ 1.00000000f, 0.76078431f, 0.76078431f},
	{ 1.00000000f, 0.75294118f, 0.75294118f},
	{ 1.00000000f, 0.74509804f, 0.74509804f},
	{ 1.00000000f, 0.73725490f, 0.73725490f},
	{ 1.00000000f, 0.72941176f, 0.72941176f},
	{ 1.00000000f, 0.72156863f, 0.72156863f},
	{ 1.00000000f, 0.71372549f, 0.71372549f},
	{ 1.00000000f, 0.70588235f, 0.70588235f},
	{ 1.00000000f, 0.69803922f, 0.69803922f},
	{ 1.00000000f, 0.69019608f, 0.69019608f},
	{ 1.00000000f, 0.68235294f, 0.68235294f},
	{ 1.00000000f, 0.67450980f, 0.67450980f},
	{ 1.00000000f, 0.66666667f, 0.66666667f},
	{ 1.00000000f, 0.65882353f, 0.65882353f},
	{ 1.00000000f, 0.65098039f, 0.65098039f},
	{ 1.00000000f, 0.64313725f, 0.64313725f},
	{ 1.00000000f, 0.63529412f, 0.63529412f},
	{ 1.00000000f, 0.62745098f, 0.62745098f},
	{ 1.00000000f, 0.61960784f, 0.61960784f},
	{ 1.00000000f, 0.61176471f, 0.61176471f},
	{ 1.00000000f, 0.60392157f, 0.60392157f},
	{ 1.00000000f, 0.59607843f, 0.59607843f},
	{ 1.00000000f, 0.58823529f, 0.58823529f},
	{ 1.00000000f, 0.58039216f, 0.58039216f},
	{ 1.00000000f, 0.57254902f, 0.57254902f},
	{ 1.00000000f, 0.56470588f, 0.56470588f},
	{ 1.00000000f, 0.55686275f, 0.55686275f},
	{ 1.00000000f, 0.54901961f, 0.54901961f},
	{ 1.00000000f, 0.54117647f, 0.54117647f},
	{ 1.00000000f, 0.53333333f, 0.53333333f},
	{ 1.00000000f, 0.52549020f, 0.52549020f},
	{ 1.00000000f, 0.51764706f, 0.51764706f},
	{ 1.00000000f, 0.50980392f, 0.50980392f},
	{ 1.00000000f, 0.50196078f, 0.50196078f},
	{ 1.00000000f, 0.49411765f, 0.49411765f},
	{ 1.00000000f, 0.48627451f, 0.48627451f},
	{ 1.00000000f, 0.47843137f, 0.47843137f},
	{ 1.00000000f, 0.47058824f, 0.47058824f},
	{ 1.00000000f, 0.46274510f, 0.46274510f},
	{ 1.00000000f, 0.45490196f, 0.45490196f},
	{ 1.00000000f, 0.44705882f, 0.44705882f},
	{ 1.00000000f, 0.43921569f, 0.43921569f},
	{ 1.00000000f, 0.43137255f, 0.43137255f},
	{ 1.00000000f, 0.42352941f, 0.42352941f},
	{ 1.00000000f, 0.41568627f, 0.41568627f},
	{ 1.00000000f, 0.40784314f, 0.40784314f},
	{ 1.00000000f, 0.40000000f, 0.40000000f},
	{ 1.00000000f, 0.39215686f, 0.39215686f},
	{ 1.00000000f, 0.38431373f, 0.38431373f},
	{ 1.00000000f, 0.37647059f, 0.37647059f},
	{ 1.00000000f, 0.36862745f, 0.36862745f},
	{ 1.00000000f, 0.36078431f, 0.36078431f},
	{ 1.00000000f, 0.35294118f, 0.35294118f},
	{ 1.00000000f, 0.34509804f, 0.34509804f},
	{ 1.00000000f, 0.33725490f, 0.33725490f},
	{ 1.00000000f, 0.32941176f, 0.32941176f},
	{ 1.00000000f, 0.32156863f, 0.32156863f},
	{ 1.00000000f, 0.31372549f, 0.31372549f},
	{ 1.00000000f, 0.30588235f, 0.30588235f},
	{ 1.00000000f, 0.29803922f, 0.29803922f},
	{ 1.00000000f, 0.29019608f, 0.29019608f},
	{ 1.00000000f, 0.28235294f, 0.28235294f},
	{ 1.00000000f, 0.27450980f, 0.27450980f},
	{ 1.00000000f, 0.26666667f, 0.26666667f},
	{ 1.00000000f, 0.25882353f, 0.25882353f},
	{ 1.00000000f, 0.25098039f, 0.25098039f},
	{ 1.00000000f, 0.24313725f, 0.24313725f},
	{ 1.00000000f, 0.23529412f, 0.23529412f},
	{ 1.00000000f, 0.22745098f, 0.22745098f},
	{ 1.00000000f, 0.21960784f, 0.21960784f},
	{ 1.00000000f, 0.21176471f, 0.21176471f},
	{ 1.00000000f, 0.20392157f, 0.20392157f},
	{ 1.00000000f, 0.19607843f, 0.19607843f},
	{ 1.00000000f, 0.18823529f, 0.18823529f},
	{ 1.00000000f, 0.18039216f, 0.18039216f},
	{ 1.00000000f, 0.17254902f, 0.17254902f},
	{ 1.00000000f, 0.16470588f, 0.16470588f},
	{ 1.00000000f, 0.15686275f, 0.15686275f},
	{ 1.00000000f, 0.14901961f, 0.14901961f},
	{ 1.00000000f, 0.14117647f, 0.14117647f},
	{ 1.00000000f, 0.13333333f, 0.13333333f},
	{ 1.00000000f, 0.12549020f, 0.12549020f},
	{ 1.00000000f, 0.11764706f, 0.11764706f},
	{ 1.00000000f, 0.10980392f, 0.10980392f},
	{ 1.00000000f, 0.10196078f, 0.10196078f},
	{ 1.00000000f, 0.09411765f, 0.09411765f},
	{ 1.00000000f, 0.08627451f, 0.08627451f},
	{ 1.00000000f, 0.07843137f, 0.07843137f},
	{ 1.00000000f, 0.07058824f, 0.07058824f},
	{ 1.00000000f, 0.06274510f, 0.06274510f},
	{ 1.00000000f, 0.05490196f, 0.05490196f},
	{ 1.00000000f, 0.04705882f, 0.04705882f},
	{ 1.00000000f, 0.03921569f, 0.03921569f},
	{ 1.00000000f, 0.03137255f, 0.03137255f},
	{ 1.00000000f, 0.02352941f, 0.02352941f},
	{ 1.00000000f, 0.01568627f, 0.01568627f},
	{ 1.00000000f, 0.00784314f, 0.00784314f},
	{ 1.00000000f, 0.00000000f, 0.00000000f}
};