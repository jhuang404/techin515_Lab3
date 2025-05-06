#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class DecisionTree {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        if (x[2] <= 2.5) {
                            if (x[0] <= 1.5) {
                                return 0;
                            }

                            else {
                                if (x[8] <= 1.5) {
                                    return 0;
                                }

                                else {
                                    if (x[5] <= 3.5) {
                                        return 1;
                                    }

                                    else {
                                        if (x[2] <= 1.5) {
                                            return 2;
                                        }

                                        else {
                                            return 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= 3.5) {
                                if (x[7] <= 1.5) {
                                    return 0;
                                }

                                else {
                                    if (x[8] <= 3.5) {
                                        return 2;
                                    }

                                    else {
                                        return 3;
                                    }
                                }
                            }

                            else {
                                return 3;
                            }
                        }
                    }

                protected:
                };
            }
        }
    }